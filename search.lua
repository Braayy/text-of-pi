local pi_text_file = io.open(arg[1], 'rb')
local pi_text = pi_text_file:read()

local red = string.char(27) .. '[31m'
local blue = string.char(27) .. '[34m'
local green = string.char(27) .. '[32m'
local reset = string.char(27) .. '[0m'

local s, e = string.find(pi_text, arg[2])
if not s then
  print(red .. arg[2] .. reset .. ' was not found in ' .. blue .. 'pi' .. reset)
  os.exit()
end

local gap = 10
local startgap = s - gap
local endgap = e + gap

if startgap < 1 then startgap = 1 end
if endgap > #pi_text then endgap = #pi_text end

startgap = string.sub(pi_text, startgap, s - 1)
endgap = string.sub(pi_text, e + 1, endgap)
search = string.sub(pi_text, s, e)

print(blue .. '... ' .. reset .. startgap .. red .. search .. reset ..  endgap  .. blue ..  ' ...' .. reset)
